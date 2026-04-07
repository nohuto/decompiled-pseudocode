/*
 * XREFs of ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007A174
 * Callers:
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x18007A0E4 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMDXGIAdapter::FindDxgiOutputDescriptor(
        CDWMDXGIAdapter *this,
        HMONITOR a2,
        struct DXGIOutputInfo *a3)
{
  unsigned int v3; // r10d
  unsigned int i; // r9d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm1

  v3 = -2147024809;
  for ( i = 0; i < *((_DWORD *)this + 94); ++i )
  {
    v5 = 312LL * i + *((_QWORD *)this + 44);
    if ( *(HMONITOR *)(v5 + 104) == a2 )
    {
      v6 = 2LL;
      do
      {
        *(_OWORD *)a3 = *(_OWORD *)v5;
        *((_OWORD *)a3 + 1) = *(_OWORD *)(v5 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)(v5 + 32);
        *((_OWORD *)a3 + 3) = *(_OWORD *)(v5 + 48);
        *((_OWORD *)a3 + 4) = *(_OWORD *)(v5 + 64);
        *((_OWORD *)a3 + 5) = *(_OWORD *)(v5 + 80);
        *((_OWORD *)a3 + 6) = *(_OWORD *)(v5 + 96);
        a3 = (struct DXGIOutputInfo *)((char *)a3 + 128);
        v7 = *(_OWORD *)(v5 + 112);
        v5 += 128LL;
        *((_OWORD *)a3 - 1) = v7;
        --v6;
      }
      while ( v6 );
      v3 = 0;
      *(_OWORD *)a3 = *(_OWORD *)v5;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(v5 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(v5 + 32);
      *((_QWORD *)a3 + 6) = *(_QWORD *)(v5 + 48);
      return v3;
    }
  }
  return v3;
}
