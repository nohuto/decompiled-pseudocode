/*
 * XREFs of ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1401A3238
 * Callers:
 *     ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1401A3158 (-RegistryNotificaionEnumerationEnd@@YAXPEAK@Z.c)
 *     vCleanupPrivateFonts @ 0x1401A31D0 (vCleanupPrivateFonts.c)
 * Callees:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x140106A9C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x140107078 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::bCleanupPFT(PFTOBJ *a1, int a2, _DWORD *a3)
{
  struct PFF *result; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  struct PFF **v11; // rbx
  __int64 v12; // r13
  struct PFF *i; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 SessionState; // rax
  struct PFF *v18; // rcx
  struct PFF *v19; // rcx
  _QWORD v20[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h]
  struct PFF *v23; // [rsp+78h] [rbp-90h]
  int v24; // [rsp+9Ch] [rbp-6Ch]
  _QWORD v25[21]; // [rsp+B0h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h] BYREF

  result = (struct PFF *)&retaddr;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    v7 = 0;
    v8 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  }
  else
  {
    v8 = 20LL;
    v7 = 128;
  }
  memset(v20, 0, 56);
  memset_0(&v21, 0, 0xE8uLL);
  v24 = 0x10000;
  v25[1] = v25;
  v25[0] = v25;
  HIDWORD(v20[1]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v25[10] = v20;
  if ( a3 )
    *a3 = 0;
  result = (struct PFF *)W32GetSessionState(v10, v9);
  v11 = (struct PFF **)(*(_QWORD *)a1 + 40LL);
  v12 = *((_QWORD *)result + 12);
  if ( (_DWORD)v8 )
  {
    do
    {
      for ( i = *v11; ; i = (struct PFF *)*((_QWORD *)v19 + 1) )
      {
        result = SkipInvalidPff(i);
        v19 = result;
        if ( !result )
          break;
        if ( a2 != 1 )
          goto LABEL_13;
        v14 = *((_DWORD *)result + 13);
        if ( (v14 & 0x400) == 0 )
          continue;
        if ( (v14 & 0x800) != 0 )
        {
          *((_DWORD *)v19 + 13) = v14 & 0xFFFFF7FF;
        }
        else
        {
LABEL_13:
          v23 = v19;
          v22 = *((_QWORD *)v19 + 1);
          *((_QWORD *)v19 + 1) = &v21;
          if ( v22 )
            *(_QWORD *)(v22 + 16) = &v21;
          if ( PFTOBJ::bUnloadWorkhorse(a1, v19, v11, v7) )
          {
            GreQuerySystemTime(v12 + 20432);
            if ( a3 )
              ++*a3;
          }
          SessionState = W32GetSessionState(v16, v15);
          GreAcquireSemaphore<17,>(*(_QWORD *)(SessionState + 96) + 4872LL);
          if ( *v11 == (struct PFF *)&v21 )
            *v11 = (struct PFF *)v22;
          v18 = v23;
          if ( v23 )
          {
            *((_QWORD *)v23 + 1) = v22;
            v18 = v23;
          }
          if ( v22 )
            *(_QWORD *)(v22 + 16) = v18;
          v19 = (struct PFF *)&v21;
        }
      }
      ++v11;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
