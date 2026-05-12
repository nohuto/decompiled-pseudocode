/*
 * XREFs of sub_14007A1F0 @ 0x14007A1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 */

__int64 __fastcall sub_14007A1F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r10
  unsigned int v10; // edx

  v7 = a1 + 376;
  v8 = sub_140020090(a1 + 376, 10);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = sub_1400296E0(v7);
    v9 = MEMORY[0];
  }
  else
  {
    v10 = -1073741637;
  }
  *a7 = v9;
  return v10;
}
