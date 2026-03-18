/*
 * XREFs of ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x180186FC0
 * Callers:
 *     ?Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z @ 0x180186F7C (-Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCM.c)
 * Callees:
 *     ??$?4U?$default_delete@$$BY0A@D@std@@$0A@@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002C088 (--$-4U-$default_delete@$$BY0A@D@std@@$0A@@-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??$make_unique@$$BY0A@D$0A@@std@@YA?AV?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@0@_K@Z @ 0x180187030 (--$make_unique@$$BY0A@D$0A@@std@@YA-AV-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@0@_K.c)
 */

void __fastcall CChannelContext::SetOwnerProcessName(CChannelContext *this, const char *a2, int a3)
{
  void **v4; // rdi
  size_t v5; // rbx
  void **v6; // rax
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void **)((char *)this + 32);
  v5 = (unsigned int)(a3 + 1);
  v6 = (void **)std::make_unique<char [0],0>(&v7, v5);
  std::unique_ptr<char [0]>::operator=<std::default_delete<char [0]>,0>(v4, v6);
  if ( v7 )
    operator delete(v7);
  memcpy_0(*v4, a2, v5);
}
