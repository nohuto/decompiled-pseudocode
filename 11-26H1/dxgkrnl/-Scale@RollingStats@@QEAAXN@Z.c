/*
 * XREFs of ?Scale@RollingStats@@QEAAXN@Z @ 0x1400A5044
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x14020A318 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall RollingStats::Scale(RollingStats *this, double a2)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  __int64 v5; // rcx

  v3 = *((_DWORD *)this + 5);
  if ( v3 >= *((_DWORD *)this + 6) )
    v3 = *((_DWORD *)this + 6);
  v4 = 0;
  if ( v3 )
  {
    v5 = 0LL;
    do
    {
      ++v4;
      *(double *)(v5 + *(_QWORD *)this) = a2 * *(double *)(v5 + *(_QWORD *)this);
      v5 += 8LL;
    }
    while ( v4 < v3 );
  }
  *((_BYTE *)this + 64) = 1;
}
