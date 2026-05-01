/*
 * XREFs of ?GetEntryCountForView@PositionAdjustmentHistory@@AEAAIPEAUIApplicationView@@@Z @ 0x180522A30
 * Callers:
 *     ?AddPositionAdjustment@PositionAdjustmentHistory@@UEAA?AW4PositionAdjustmentAction@@PEAUIApplicationView@@@Z @ 0x180522900 (-AddPositionAdjustment@PositionAdjustmentHistory@@UEAA-AW4PositionAdjustmentAction@@PEAUIApplica.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

__int64 __fastcall PositionAdjustmentHistory::GetEntryCountForView(
        PositionAdjustmentHistory *this,
        struct IUnknown *a2)
{
  ULONGLONG TickCount64; // rax
  unsigned int v5; // edi
  __int64 v6; // rbx
  ULONGLONG v7; // r14
  __int64 v8; // rsi

  TickCount64 = GetTickCount64();
  v5 = 0;
  v6 = *((_QWORD *)this + 3);
  v7 = TickCount64;
  v8 = v6 + 16LL * *((_QWORD *)this + 4);
  while ( v6 != v8 )
  {
    if ( SHIsSameObject(a2, *(struct IUnknown **)v6)
      && v7 - *(_QWORD *)(v6 + 8) < *((unsigned int *)this + 14)
      && ++v5 >= 4 )
    {
      break;
    }
    v6 += 16LL;
  }
  return v5;
}
