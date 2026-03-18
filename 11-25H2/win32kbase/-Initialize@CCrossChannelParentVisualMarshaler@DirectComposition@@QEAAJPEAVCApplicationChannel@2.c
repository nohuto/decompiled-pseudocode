/*
 * XREFs of ?Initialize@CCrossChannelParentVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@VResourceHandle@@I@Z @ 0x140054B54
 * Callers:
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x140054914 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x140048E98 (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x140054680 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140054C08 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::Initialize(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rax

  v9 = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)a1);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 16) |= 0x2000002u;
    v9 = 0;
    *(_DWORD *)(a1 + 104) = 1065353216;
    *(_DWORD *)(a1 + 108) = 1065353216;
    v10 = Win32AllocPoolWithQuotaZInitImpl(v8, 0x10uLL, 0x76634344u);
    if ( v10 )
      *(_DWORD *)(v10 + 8) = 0;
    *(_QWORD *)(a1 + 368) = v10;
    if ( v10 )
    {
      DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a3);
      *(_DWORD *)(*(_QWORD *)(a1 + 368) + 12LL) = a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 368) + 8LL) = a3;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v9;
}
