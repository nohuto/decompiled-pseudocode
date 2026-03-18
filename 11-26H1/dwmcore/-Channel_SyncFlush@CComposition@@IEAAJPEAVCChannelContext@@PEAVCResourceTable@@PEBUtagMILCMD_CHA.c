/*
 * XREFs of ?Channel_SyncFlush@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1801BEE00
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SYNCFLUSH *a4)
{
  _QWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // r9d
  int v7; // ebx
  unsigned int v9; // eax
  struct CChannelContext *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (_QWORD *)((char *)this + 896);
  v5 = *((_DWORD *)this + 230);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    v9 = 183;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v9, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x53Bu, 0LL);
    return (unsigned int)v7;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)this + 229) )
  {
    *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 230)) = a2;
    *((_DWORD *)this + 230) = v6;
    goto LABEL_4;
  }
  v7 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 896, 8u, (__int64)v4, &v10);
  if ( v7 < 0 )
  {
    v9 = 194;
    goto LABEL_7;
  }
LABEL_4:
  CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)v10 + 8));
  return (unsigned int)v7;
}
