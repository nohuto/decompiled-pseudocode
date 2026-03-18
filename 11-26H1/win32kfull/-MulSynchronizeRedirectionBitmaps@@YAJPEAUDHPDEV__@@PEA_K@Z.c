/*
 * XREFs of ?MulSynchronizeRedirectionBitmaps@@YAJPEAUDHPDEV__@@PEA_K@Z @ 0x140234DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulSynchronizeRedirectionBitmaps(struct DHPDEV__ *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(_QWORD, unsigned __int64 *, _QWORD *, __int64); // rax

  v2 = *(_QWORD **)a1;
  v3 = -1073741823;
  v4 = *((unsigned int *)a1 + 4);
  while ( 1 )
  {
    v5 = v2[6];
    if ( (*(_DWORD *)(v5 + 1808) & 0x8000000) == 0 )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD *, __int64))(v5 + 3456);
      if ( v6 )
        break;
    }
    v2 = (_QWORD *)*v2;
    v4 = (unsigned int)(v4 - 1);
    if ( !(_DWORD)v4 )
      return v3;
  }
  return v6(*(_QWORD *)(v5 + 1784), a2, v2, v4);
}
