/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1403043B8
 * Callers:
 *     EngLoadModule @ 0x140304690 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1403046B0 (EngLoadModuleForWrite.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BDD90 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401DCFCC (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140304244 (--0-$SEMOBJ@$0BL@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z @ 0x1403042D0 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEBG@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140305DF8 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     MakeSystemRelativePath @ 0x140340CF0 (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(wchar_t *Source, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  wchar_t *v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // r14
  unsigned __int64 v10; // rdi
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v12; // rbx
  char *v13; // rbx
  unsigned __int64 *v14; // rax
  HSEMAPHORE v15; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v17; // rax
  bool v18; // zf
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-38h] BYREF
  HSEMAPHORE v20; // [rsp+70h] [rbp+18h] BYREF

  v2 = -1LL;
  Destination = 0LL;
  result = -1LL;
  v5 = Source;
  v6 = 0LL;
  do
    ++result;
  while ( Source[result] );
  if ( result )
  {
    if ( a2 || (result = (__int64)GetModuleHandleAndIncrementRefcount(Source), (v6 = result) == 0) )
    {
      do
        ++v2;
      while ( v5[v2] );
      v7 = (2 * v2 + 9) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (unsigned int)MakeSystemRelativePath(v5, &Destination) )
      {
        v8 = PALLOCMEM((int)v7 + 104, 1818846791LL);
        v9 = (char *)v8;
        if ( v8 )
        {
          v10 = v7 + v8;
          if ( (unsigned int)bMapFile(Destination.Buffer, v7 + v8 + 24, a2, 0LL, *(_QWORD *)&Destination.Length) )
          {
            v6 = v10 + 24;
            if ( a2 )
              v5 = (wchar_t *)&pszFormat;
            StringCchCopyW(v9, v7 >> 1, (char *)v5);
            *(_DWORD *)(v10 + 16) = 1;
            *(_DWORD *)(v10 + 20) = v7 + 24;
            v12 = Gre::Base::Globals(v11);
            SEMOBJ<27>::SEMOBJ<27>(&v20, v12);
            v13 = (char *)v12 + 3056;
            v14 = (unsigned __int64 *)*((_QWORD *)v13 + 1);
            if ( (char *)*v14 != v13 )
              __fastfail(3u);
            *(_QWORD *)v10 = v13;
            *(_QWORD *)(v10 + 8) = v14;
            *v14 = v10;
            *((_QWORD *)v13 + 1) = v10;
            v15 = v20;
            if ( v20 )
            {
              GlobalLockName = GrepGetGlobalLockName(27);
              EtwTraceGreLockReleaseSemaphore(GlobalLockName, v15);
              v17 = GreGetCurrentThreadCrossSessionCheck();
              if ( v17 )
              {
                v18 = (*(_QWORD *)v17 & 0xFFFFFFFFF7FFFFFFuLL) == 0;
                *(_QWORD *)v17 &= ~0x8000000uLL;
                if ( v18 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v15);
            }
          }
          else
          {
            Win32FreePool(v9);
          }
        }
        Win32FreePool(Destination.Buffer);
      }
      return v6;
    }
  }
  return result;
}
