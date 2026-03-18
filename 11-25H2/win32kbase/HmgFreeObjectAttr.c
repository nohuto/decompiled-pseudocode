/*
 * XREFs of HmgFreeObjectAttr @ 0x14008E9D0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreSetBrushOwner @ 0x1400711D0 (GreSetBrushOwner.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x14008EAB0 (NtGdiCreateRectRgn.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall HmgFreeObjectAttr(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  HSEMAPHORE v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread();
  if ( a1 && CurrentThread )
  {
    if ( !*((_QWORD *)CurrentThread + 5) )
    {
      *((_QWORD *)CurrentThread + 5) = a1;
      return;
    }
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v3);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        SEMOBJ<20>::SEMOBJ<20>(&v10);
        v6 = v5 + 26;
        v7 = v5[26];
        if ( (_QWORD *)v7 == v5 + 26 || *(_DWORD *)(v7 + 16) == 170 )
        {
          v7 = PALLOCNOZ(1384LL, 1717658183LL);
          if ( !v7 )
            goto LABEL_9;
          v9 = *v6;
          if ( *(__int64 **)(*v6 + 8) != v6 )
            __fastfail(3u);
          *(_QWORD *)v7 = v9;
          *(_QWORD *)(v7 + 8) = v6;
          *(_QWORD *)(v9 + 8) = v7;
          *v6 = v7;
          *(_DWORD *)(v7 + 16) = 0;
        }
        v8 = *(unsigned int *)(v7 + 16);
        *(_DWORD *)(v7 + 16) = v8 + 1;
        *(_QWORD *)(v7 + 8 * v8 + 24) = a1;
        v5[6] = a1;
LABEL_9:
        SEMOBJ<20>::vUnlock(&v10);
      }
    }
  }
}
