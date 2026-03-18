/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x1401BA394
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x140054BF8 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140044FF0 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140055258 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned int v8; // esi
  __int64 v9; // rax

  *(_BYTE *)(a1 + 324) |= 0x40u;
  *(_DWORD *)(a1 + 288) = -1;
  *(_DWORD *)(a1 + 272) = -1;
  *(_DWORD *)(a1 + 280) = -1;
  *(_DWORD *)(a1 + 292) = -1;
  *(_DWORD *)(a1 + 276) = -1;
  *(_DWORD *)(a1 + 112) = 1065353216;
  *(_DWORD *)(a1 + 284) = -1;
  v8 = 0;
  v9 = Win32AllocPoolWithQuotaZInitImpl(a1, 0x10uLL, 0x76634344u);
  if ( v9 )
    *(_DWORD *)(v9 + 8) = 0;
  else
    v9 = 0LL;
  *(_QWORD *)(a1 + 336) = v9;
  if ( v9 )
  {
    *(_DWORD *)(a1 + 104) = 1065353216;
    *(_DWORD *)(a1 + 108) = 1065353216;
    DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
    *(_DWORD *)(*(_QWORD *)(a1 + 336) + 12LL) = a4;
    *(_DWORD *)(*(_QWORD *)(a1 + 336) + 8LL) = a3;
    *(_DWORD *)(a1 + 16) |= 0x4000002u;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
