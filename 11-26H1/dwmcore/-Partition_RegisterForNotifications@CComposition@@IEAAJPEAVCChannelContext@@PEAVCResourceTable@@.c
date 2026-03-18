/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18014E7BC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Release@?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18001F360 (-Release@-$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18010E86C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18014EB54 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x180163BF0 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  char *v6; // rcx
  struct CChannelContext **v7; // r8
  unsigned int v8; // r10d
  unsigned int v9; // edx
  struct CChannelContext **v10; // rax
  __int64 v11; // rax
  unsigned int v13; // edx
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int i; // eax
  int v18; // [rsp+30h] [rbp-28h] BYREF
  __int128 v19; // [rsp+34h] [rbp-24h]
  __int64 v20; // [rsp+44h] [rbp-14h]
  volatile signed __int32 *v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = (volatile signed __int32 *)a2;
  v6 = (char *)this + 928;
  v7 = *(struct CChannelContext ***)v6;
  v8 = *((_DWORD *)v6 + 6);
  if ( *((_BYTE *)a4 + 4) )
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = *(struct CChannelContext ***)v6;
      do
      {
        if ( a2 == *v10 )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < v8 );
    }
    v11 = *((unsigned int *)this + 238);
    if ( v9 != (_DWORD)v11 )
      return 0LL;
    v13 = v11 + 1;
    if ( (int)v11 + 1 < (unsigned int)v11 )
    {
      v14 = -2147024362;
      v16 = 183;
    }
    else
    {
      if ( v13 <= *((_DWORD *)v6 + 5) )
      {
        v7[v11] = a2;
        *((_DWORD *)v6 + 6) = v13;
        goto LABEL_11;
      }
      v14 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v6, 8u, (__int64)v7, &v21);
      if ( v14 >= 0 )
      {
LABEL_11:
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v21 + 2));
        v18 = 5;
        v20 = 0LL;
        v15 = *((_DWORD *)this + 216);
        v19 = 0LL;
        DWORD1(v19) = v15;
        DWORD2(v19) = v15;
        CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v18);
        return 0LL;
      }
      v16 = 194;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v16, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x402u, 0LL);
    return 0LL;
  }
  for ( i = 0; i < v8; ++v7 )
  {
    if ( a2 == *v7 )
      break;
    ++i;
  }
  if ( i < *((_DWORD *)this + 238) && (unsigned int)DynArray<CChannelContext *,1>::Remove(v6, &v21, v7) )
    CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>::Release(v21);
  return 0LL;
}
