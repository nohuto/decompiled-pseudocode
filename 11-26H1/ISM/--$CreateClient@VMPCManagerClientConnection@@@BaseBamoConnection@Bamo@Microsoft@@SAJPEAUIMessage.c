/*
 * XREFs of ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180163B24
 * Callers:
 *     ?RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ @ 0x180169870 (-RuntimeClassInitialize@MPCManagerClient@@QEAAJXZ.c)
 * Callees:
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x180045888 (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 *     ??1?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180088DE4 (--1-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0BamoConnection@MPCManagerBamo_AutoBamos@@QEAA@XZ @ 0x18008F314 (--0BamoConnection@MPCManagerBamo_AutoBamos@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVBaseBamoConnection@Bamo@Microsoft@@@Z @ 0x180099484 (-attach@-$com_ptr_t@VBaseBamoConnection@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAXP.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::CreateClient<MPCManagerClientConnection>(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        Microsoft::Bamo::BaseBamoConnection **a4)
{
  _QWORD *v7; // rbx
  Microsoft::Bamo::BaseBamoConnection *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  int v14[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::Bamo::BaseBamoConnection *v16; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v17; // [rsp+68h] [rbp+20h]

  v16 = 0LL;
  *a4 = 0LL;
  v7 = operator new(0x108uLL);
  v17 = v7;
  memset_0(v7, 0, 0x108uLL);
  MPCManagerBamo_AutoBamos::BamoConnection::BamoConnection((MPCManagerBamo_AutoBamos::BamoConnection *)v7);
  *v7 = &MPCManagerClientConnection::`vftable';
  v7[31] = 0LL;
  v7[32] = 0LL;
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::attach(
    &v16,
    (Microsoft::Bamo::BaseBamoConnection *)v7);
  v8 = v16;
  if ( v16 )
  {
    *(_OWORD *)v14 = *a2;
    v12 = Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient(
            (__int64)v16,
            a1,
            (__int128 *)v14,
            (__int64)L"System\\MPCManagerConversation");
    v9 = v12;
    if ( v12 >= 0 )
    {
      v16 = 0LL;
      *a4 = v8;
      v9 = 0;
      goto LABEL_7;
    }
    v10 = (unsigned int)v12;
    v11 = 2932LL;
  }
  else
  {
    v9 = -2147024882;
    v10 = 2147942414LL;
    v11 = 2930LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    (const char *)v10);
LABEL_7:
  wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>(&v16);
  return v9;
}
