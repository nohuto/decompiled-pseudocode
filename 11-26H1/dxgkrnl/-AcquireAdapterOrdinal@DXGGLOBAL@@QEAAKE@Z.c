/*
 * XREFs of ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x140426CE4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(DXGGLOBAL *this, char a2)
{
  unsigned int v4; // edi
  ULONG ClearBitsAndSet; // ebp
  ULONG v6; // eax
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 824), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = -1;
  if ( a2 && *((_DWORD *)this + 222) )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)((char *)this + 888), 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v4 = DXGGLOBAL::GetMaximumGlobalAdapterCount(this) + ClearBitsAndSet;
      goto LABEL_9;
    }
    DxgkLogCodePointPacket(0x74u, 2u, *((_DWORD *)this + 222), 0, 0LL);
  }
  v6 = RtlFindClearBitsAndSet((PRTL_BITMAP)((char *)this + 872), 1u, 0);
  if ( v6 == -1 )
  {
    DxgkLogCodePointPacket(0x74u, 1u, *((_DWORD *)this + 218), 0, 0LL);
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4027;
  }
  else
  {
    v4 = v6;
  }
LABEL_9:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v8);
  return v4;
}
