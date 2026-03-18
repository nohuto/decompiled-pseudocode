/*
 * XREFs of ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18010DA40 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18010E190 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetBindingBroken(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v7; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  _DWORD *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  int *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]

  if ( (*((_BYTE *)this + 216) & 2) != 0 )
  {
    v4 = CBaseExpression::NotifyAnimationDisconnected(this);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x196u, 0LL);
      return v5;
    }
    CBaseExpression::EnsureExpressionIsUnregistered(this);
  }
  *((_BYTE *)this + 216) |= 8u;
  if ( (unsigned int)dword_1803DC880 > 5 && (qword_1803DC890 & 4) != 0 && (qword_1803DC898 & 4) == qword_1803DC898 )
  {
    v7 = *((_DWORD *)this + 18);
    v8[0] = (*(__int64 (__fastcall **)(CBaseExpression *, struct CResourceTable *, const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *))(*(_QWORD *)this + 144LL))(
              this,
              a2,
              a3);
    v17 = 4LL;
    v16 = &v7;
    v15 = 4LL;
    v14 = v8;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1803DC888;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 4LL;
    UserData.Size = *(unsigned __int16 *)off_1803DC888;
    v11 = &unk_1803B58FB;
    UserData.Reserved = 2;
    v12 = 67;
    v13 = 1;
    v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0;
}
