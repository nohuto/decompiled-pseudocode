/*
 * XREFs of ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1403BC8E4
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403BBFC8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     McTemplateK0pqqz_EtwWriteTransfer @ 0x14006834C (McTemplateK0pqqz_EtwWriteTransfer.c)
 */

void __fastcall DXGADAPTER::ReportNodeMetadata(DXGADAPTER *this)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  unsigned int NumDifferentPhysicalAdapters; // r12d
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+28h] [rbp-40h]

  v2 = 0;
  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  if ( NumDifferentPhysicalAdapters )
  {
    v5 = 0LL;
    do
    {
      v6 = *((_QWORD *)this + 379);
      if ( *(_QWORD *)(v6 + v5 + 32) )
      {
        v7 = *(unsigned __int16 *)(v6 + v5);
        v8 = 0;
        if ( *(_WORD *)(v6 + v5) )
        {
          v9 = 0LL;
          do
          {
            v10 = *(_QWORD *)(v6 + v5 + 32);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            {
              LODWORD(v12) = *(_DWORD *)(v9 + v10);
              LODWORD(v11) = v8 | (v2 << 16);
              McTemplateK0pqqz_EtwWriteTransfer((unsigned int)v11, v10, v3, this, v11, v12, v9 + v10 + 4);
            }
            ++v8;
            v9 += 74LL;
          }
          while ( v8 < v7 );
        }
      }
      ++v2;
      v5 += 352LL;
    }
    while ( v2 < NumDifferentPhysicalAdapters );
  }
}
