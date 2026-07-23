/*
 * XREFs of MiExamineHalVa @ 0x140CF8D88
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

__int64 MiExamineHalVa()
{
  unsigned __int64 v0; // rdx
  unsigned __int64 *v1; // r9
  unsigned __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  __int128 v7; // [rsp+8h] [rbp-20h]

  v7 = 0LL;
  v0 = 0xFFFFF6FB7FFFFFF0uLL;
LABEL_2:
  v0 -= 8LL;
  v1 = (unsigned __int64 *)&v6;
  v2 = v0;
  v3 = 3LL;
  LODWORD(v4) = 3;
  do
  {
    *v1 = v2;
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v1;
    --v3;
  }
  while ( v3 );
  while ( 1 )
  {
    v4 = (unsigned int)(v4 - 1);
    if ( (*(_QWORD *)*(&v6 + v4) & 1) == 0 )
      return (__int64)((v0 << 25) + 0x10000000) >> 16 << 25 >> 16;
    if ( !(_DWORD)v4 )
    {
      while ( (v0 & 0xFFF) != 0 )
      {
        v0 -= 8LL;
        if ( (*(_QWORD *)v0 & 1) == 0 )
          return (__int64)((v0 << 25) + 0x10000000) >> 16 << 25 >> 16;
      }
      goto LABEL_2;
    }
  }
}
