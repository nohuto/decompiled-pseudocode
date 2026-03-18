/*
 * XREFs of ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1401975D4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::CreateFrameBufferSaveAreaSection(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = 352LL * a2;
  if ( *(_QWORD *)(*((_QWORD *)this + 379) + v3 + 64) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11448;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_pPhysicalAdapter[PhysicalAdapterIndex].m_FrameBufferSaveAreaSection == nullptr",
      11448LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = 0LL;
  v10 = a3;
  v6 = MmCreateSection(&v9, 0LL, 0LL, &v10, 4, 0x8000000, 0LL, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    *(_QWORD *)(v3 + *((_QWORD *)this + 379) + 64) = v9;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11463;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create section object for buffer save area size. Status 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v7;
}
