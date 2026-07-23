/*
 * XREFs of MiInitializeZeroingAttributes @ 0x140D03E70
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     <none>
 */

void MiInitializeZeroingAttributes()
{
  __int64 v0; // rax
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ecx
  unsigned int *v4; // rdx
  unsigned int v5; // ecx
  _DWORD *v6; // rdx

  byte_140E2D918 = 0;
  if ( KeNumberNodes )
  {
    v0 = 0LL;
    v1 = (unsigned __int16)KeNumberNodes;
    do
    {
      v2 = qword_140E2D838;
      v3 = 0;
      v4 = (unsigned int *)(v0 + qword_140E2D838 + 120);
      do
      {
        *v4 = v3;
        v4[1] = v3;
        v4[2] = v3;
        v4[3] = v3;
        v4 += 4;
        ++v3;
      }
      while ( v3 < 3 );
      v5 = 0;
      v6 = (_DWORD *)(v0 + v2 + 168);
      do
        *v6++ = v5++;
      while ( v5 < 3 );
      *(_DWORD *)(v0 + v2 + 180) = 2;
      v0 += 384LL;
      --v1;
    }
    while ( v1 );
  }
}
