/*
 * XREFs of ?CheckForApertureGuardPageCorruption@VIDMM_APERTURE_SEGMENT@@QEBAJPEAPEAK_N@Z @ 0x140050D08
 * Callers:
 *     ?VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z @ 0x14004F898 (-VidMmCheckForApertureGuardPageCorruption@@YAJPEBUVIDMM_SEGMENT_BASE@@PEAPEAK_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CheckForApertureGuardPageCorruption(
        VIDMM_APERTURE_SEGMENT *this,
        unsigned int **a2,
        char a3)
{
  unsigned int *v3; // rax
  unsigned int *v5; // rdi
  __int64 v7; // rdx
  char *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  _DWORD *v11; // rdi
  __int64 j; // rcx
  __int64 result; // rax
  unsigned int i; // eax
  __int64 v15; // rcx

  v3 = (unsigned int *)*((_QWORD *)this + 65);
  v5 = v3;
  if ( !a3 || !dword_14008A304 )
  {
    for ( i = 0; i < 0x400; ++i )
    {
      if ( *v5 != 1685217607 )
        goto LABEL_19;
      ++v5;
    }
    return 0LL;
  }
  if ( *v3 == 1685217607 )
  {
    v5 = v3 + 1023;
    if ( v3[1023] == 1685217607 )
    {
      v5 = v3 + 512;
      if ( v3[512] == 1685217607 )
      {
        v7 = *((_QWORD *)this + 67);
        v8 = (char *)v3 + v7;
        v9 = *(_QWORD *)((char *)v3 + v7) - (_QWORD)ApertureCheckPattern;
        if ( !v9 )
          v9 = *((_QWORD *)v8 + 1) - qword_14008A158;
        if ( v9 )
        {
          WdLogSingleEntry3(1LL, (char *)v3 + v7, v8 + 16, this);
          WdLogGlobalForLineNumber = 2132;
          DxgkLogInternalTriageEvent(v10, 0x40000LL);
          dword_14008A304 = 0;
          v11 = (_DWORD *)*((_QWORD *)this + 65);
          for ( j = 1024LL; j; --j )
            *v11++ = 1685217607;
        }
        else
        {
          *((_QWORD *)this + 67) = v7 + 16;
          if ( (unsigned __int64)(v7 + 16) >= 0x1000 )
            *((_QWORD *)this + 67) = 0LL;
        }
        return 0LL;
      }
    }
  }
LABEL_19:
  WdLogSingleEntry2(1LL, v5, this);
  WdLogGlobalForLineNumber = 2186;
  DxgkLogInternalTriageEvent(v15, 0x40000LL);
  result = 2147483653LL;
  *a2 = v5;
  return result;
}
