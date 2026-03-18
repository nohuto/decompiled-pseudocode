/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18010DD84
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18010DE34 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@UDCOMPOSITION_PROPERTY_REFERENCE@@W4DCOMPOSITIO.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  char v11; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 3);
  if ( v5 )
  {
    if ( v5 < *((_DWORD *)a2 + 7) && (v6 = *((_DWORD *)a2 + 6) * v5, v7 = *((_QWORD *)a2 + 5), *(_DWORD *)(v6 + v7)) )
      v4 = *(_QWORD *)(v6 + v7 + 8);
    else
      v4 = 0LL;
  }
  *((_DWORD *)this + 53) = *((_DWORD *)a3 + 2);
  v11 = *((_BYTE *)a3 + 32);
  v8 = CBaseExpression::SetTarget(
         this,
         *((unsigned int *)a2 + 12),
         v4,
         *((unsigned int *)a3 + 4),
         *((_DWORD *)a3 + 9),
         *((unsigned __int16 *)a3 + 17),
         v11,
         *((_QWORD *)a3 + 3));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x52u, 0LL);
  else
    return 0;
  return v9;
}
