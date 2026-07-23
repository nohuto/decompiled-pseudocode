/*
 * XREFs of MiPhysicalMemoryEverRemoved @ 0x1406EEB94
 * Callers:
 *     MiMapNewPfns @ 0x14086CA54 (MiMapNewPfns.c)
 *     MiUnmapPfns @ 0x14086D48C (MiUnmapPfns.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiPhysicalMemoryEverRemoved(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r9
  unsigned int v8; // r11d
  unsigned __int64 v9; // r8
  __int64 *v11; // r10
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  bool v14; // zf
  bool i; // zf
  __int64 v16; // rax

  v3 = a2 + 0x3FFFF;
  v4 = qword_140E2D938;
  v5 = (a1 + v3) >> 18;
  v7 = a1 >> 18;
  if ( v5 <= qword_140E2D938 )
  {
    v4 = v5;
  }
  else if ( v7 >= qword_140E2D938 )
  {
    return 0LL;
  }
  v8 = 0;
  v9 = v4 - v7;
  if ( !a3 )
  {
    RtlSetBitsEx((__int64)&qword_140E2D938, a1 >> 18, v9);
    return 1LL;
  }
  if ( v7 >= qword_140E2D938 )
    return 1LL;
  if ( v9 <= 1 )
    return v9 != 1 || _bittest64((const signed __int64 *)(qword_140E2D940 + 8 * (a1 >> 24)), (a1 >> 18) & 0x3F);
  if ( qword_140E2D938 - v7 < v9 )
    return 1LL;
  v11 = (__int64 *)(qword_140E2D940 + 8 * (a1 >> 24));
  v12 = *v11;
  v13 = qword_140E2D940 + 8 * ((unsigned __int64)(v4 - 1) >> 6);
  if ( v11 != (__int64 *)v13 )
  {
    for ( i = ((-1LL << v7) & v12) == 0; i; i = v16 == 0 )
    {
      v16 = *++v11;
      if ( v11 == (__int64 *)v13 )
      {
        v14 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v4 - 1)) & v16) == 0;
        goto LABEL_19;
      }
    }
    return 1LL;
  }
  v14 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v7) & v12) == 0;
LABEL_19:
  LOBYTE(v8) = !v14;
  return v8;
}
