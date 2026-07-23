/*
 * XREFs of MiInitializeBootLoadedDriverPfnRange @ 0x140713FC8
 * Callers:
 *     MiInitializeBootLoadedDriverPfns @ 0x140D06644 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiMarkPfnVerified @ 0x14038E794 (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfnRange(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  _QWORD *i; // rdi
  __int64 v7; // rbx
  int PfnSlabType; // eax
  __int64 v9; // r8
  __int64 v10; // rcx

  v3 = 0LL;
  v4 = (unsigned __int64)&a1[a2];
  for ( i = a1; (unsigned __int64)i < v4; ++i )
  {
    v7 = 48 * ((*i >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    PfnSlabType = MiGetPfnSlabType(v7);
    v10 = v3 + 1;
    if ( PfnSlabType == 9 )
      v10 = v3;
    v3 = v10;
    if ( a3 && (MiFlags & 0x10000) != 0 )
    {
      *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v9 >> 63) & 0xFFFFFFFFFFFFFFFEuLL)
                                                                           + 96);
    }
    else
    {
      if ( v9 >= 0 )
      {
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)((((unsigned __int64)MiFlags >> 17) & 1) != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                             + 192);
        if ( (MiFlags & 0x20000) != 0 && ((*(_QWORD *)(v7 + 40) >> 60) & 7) != 3 )
          MiMarkPfnVerified(v7, 0);
      }
      *(_BYTE *)(v7 + 35) |= 8u;
    }
  }
  return v3;
}
