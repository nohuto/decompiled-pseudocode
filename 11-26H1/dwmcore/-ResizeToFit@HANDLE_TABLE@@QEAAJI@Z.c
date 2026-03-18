/*
 * XREFs of ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18015570C
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180154BB4 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x180155640 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 *     ?Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_CREATERESOURCE@@@Z @ 0x1801557B0 (-Channel_CreateResource@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 *     ?AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z @ 0x18018984C (-AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180154D00 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::ResizeToFit(HANDLE_TABLE *this, unsigned int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = 0x4000000;
  if ( a2 >= 0x4000000 )
  {
    v4 = -2003303411;
    v7 = 139;
    goto LABEL_10;
  }
  if ( a2 + 1024 < a2 )
  {
    v4 = -2147024362;
    v7 = 155;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, v7, 0LL);
    return v4;
  }
  v4 = 0;
  if ( a2 + 1024 < 0x4000000 )
    v3 = a2 + 1024;
  if ( v3 > *((_DWORD *)this + 3) )
  {
    v5 = HANDLE_TABLE::Resize(this, v3);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xAFu, 0LL);
  }
  return v4;
}
