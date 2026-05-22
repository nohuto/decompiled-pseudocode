/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x180054150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180043588 (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180088FE0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  __int64 v2; // rdi
  int *v3; // rsi
  int *i; // rbx
  InputSiteElementProxy *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v10; // eax
  struct ISMBamos_AutoBamos::BamoConnection **v11; // rax
  struct InputSystemServerConnection *v12; // rcx
  Microsoft::Bamo::BaseBamoConnection *v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v18; // [rsp+60h] [rbp+18h] BYREF

  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
    v10 = CoreUICreate(&v17);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v10,
        v15);
    v11 = InputSystemServerConnection::Create(&v18, v17);
    v12 = *v11;
    *v11 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v12;
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v13);
    }
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL)
                                          + 152LL))(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL);
  v3 = *(int **)(v2 + 88);
  for ( i = *(int **)(v2 + 80); i != v3 && *(InputSiteElementProxy **)i != this; i += 2 )
    ;
  while ( 1 )
  {
    i += 2;
    if ( i == v3 )
      break;
    v5 = 0LL;
    if ( &v15 != i )
    {
      v5 = *(InputSiteElementProxy **)i;
      *(_QWORD *)i = 0LL;
    }
    v6 = *((_QWORD *)i - 1);
    *((_QWORD *)i - 1) = v5;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = *(_QWORD *)(v2 + 88);
  v8 = *(_QWORD *)(v7 - 8);
  if ( v8 )
  {
    *(_QWORD *)(v7 - 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  *(_QWORD *)(v2 + 88) -= 8LL;
  return 0LL;
}
