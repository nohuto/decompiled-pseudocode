/*
 * XREFs of ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1400E8D9C
 * Callers:
 *     ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1400E8D74 (--_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCompClockInfo::~CCompClockInfo(DirectComposition::CCompClockInfo *this)
{
  void *v2; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
    NtClose(v2);
  if ( *((_DWORD *)this + 4) )
  {
    v3 = *((_DWORD *)this + 4);
    DxgkCloseAdapterInternal(&v3);
  }
}
