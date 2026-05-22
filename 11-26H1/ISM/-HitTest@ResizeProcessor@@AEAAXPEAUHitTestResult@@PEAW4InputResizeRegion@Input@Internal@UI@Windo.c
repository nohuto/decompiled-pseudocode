/*
 * XREFs of ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180154350
 * Callers:
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180155594 (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIResizeAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003EF14 (--$As@UIResizeAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ??$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoResizeControllerClientProxy@@@WRL@Microsoft@@XZ @ 0x180152CF4 (--$GetAttachedObject@UIResizeControllerClientProxy@@VBamoResizeControllerClientProxy@@@InputSite.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ResizeProcessor::HitTest(
        ResizeProcessor *this,
        struct HitTestResult *a2,
        enum Windows::UI::Internal::Input::InputResizeRegion *a3,
        struct BamoResizeControllerClientProxy **a4,
        struct InputSite **a5)
{
  struct InputSite **v7; // r15
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 *v10; // rax
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __m128i v18; // xmm6
  struct BamoResizeControllerClientProxy *v19; // rbx
  __int64 (__fastcall ***v20)(_QWORD); // rsi
  _QWORD *v21; // rax
  unsigned __int64 v22; // rcx
  __int64 *v23; // rcx
  struct BamoResizeControllerClientProxy *v24; // rbx
  struct InputSite **v25; // rsi
  __int64 *v26; // rcx
  __int64 *v27; // [rsp+20h] [rbp-30h]
  GUID Buf1; // [rsp+30h] [rbp-20h] BYREF
  __int64 (__fastcall ***v29)(_QWORD); // [rsp+90h] [rbp+40h] BYREF
  __int64 v30; // [rsp+98h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h]

  v29 = (__int64 (__fastcall ***)(_QWORD))this;
  *a4 = 0LL;
  v7 = a5;
  *a5 = 0LL;
  Buf1 = GUID_NULL;
  v8 = *((_QWORD *)a2 + 13);
  v9 = *(__int64 **)(v8 - 24);
  v10 = *(__int64 **)(v8 - 16);
  v27 = v10;
  v11 = *(_QWORD *)GUID_NULL.Data4;
  v31 = *(_QWORD *)&GUID_NULL.Data1;
  while ( v9 != v10 )
  {
    if ( !memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) && a3 )
    {
      v12 = 0LL;
      v30 = 0LL;
      v13 = *(_QWORD *)(*v9 + 488);
      v14 = *(_QWORD *)(*v9 + 496);
      if ( v13 != v14 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IResizeAreaClientProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v13 + 8),
                      &v30) >= 0 )
            break;
          v13 += 16LL;
        }
        while ( v13 != v14 );
        v12 = v30;
      }
      v15 = v12 - 8;
      v16 = -v12;
      v17 = (_QWORD *)(v15 & -(__int64)(v16 != 0));
      if ( v17 )
        (*(void (__fastcall **)(__int64))*v17)(v15 & -(__int64)(v16 != 0));
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
      if ( v17 )
      {
        v18 = *(__m128i *)(*(__int64 (__fastcall **)(_QWORD *))(v17[1] + 24LL))(v17 + 1);
        Buf1 = (GUID)v18;
        *(_DWORD *)a3 = (*(__int64 (__fastcall **)(_QWORD *))(v17[1] + 32LL))(v17 + 1);
        v11 = _mm_srli_si128(v18, 8).m128i_u64[0];
        v31 = v18.m128i_i64[0];
        (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
      }
    }
    if ( !memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) )
    {
      if ( !a3 )
        goto LABEL_27;
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v9, (__int64 *)&a5);
      v24 = (struct BamoResizeControllerClientProxy *)a5;
      if ( a5 )
      {
        v25 = a5 + 1;
        if ( !(*((unsigned int (__fastcall **)(struct InputSite **))a5[1] + 9))(a5 + 1)
          || (*((unsigned int (__fastcall **)(__int64))*v25 + 9))((__int64)v24 + 8) == 2 )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&a5);
          *a4 = v24;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9);
          *v7 = (struct InputSite *)*v9;
          v26 = (__int64 *)&a5;
          goto LABEL_30;
        }
      }
      v23 = (__int64 *)&a5;
    }
    else
    {
      InputSite::GetAttachedObject<IResizeControllerClientProxy,BamoResizeControllerClientProxy>(*v9, (__int64 *)&v29);
      v19 = (struct BamoResizeControllerClientProxy *)v29;
      if ( v29 )
      {
        v20 = v29 + 1;
        if ( (unsigned int)v29[1][9](v29 + 1) == 1
          || (unsigned int)((__int64 (__fastcall **)(char *))*v20)[9]((char *)v19 + 8) == 2 )
        {
          v21 = (_QWORD *)((__int64 (__fastcall **)(char *))*v20)[8]((char *)v19 + 8);
          v22 = *v21 - v31;
          if ( *v21 == v31 )
            v22 = v21[1] - v11;
          if ( !v22 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v29);
            *a4 = v19;
            wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v9);
            *v7 = (struct InputSite *)*v9;
            v26 = (__int64 *)&v29;
LABEL_30:
            Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v26);
            return;
          }
        }
      }
      v23 = (__int64 *)&v29;
    }
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease(v23);
LABEL_27:
    ++v9;
    v10 = v27;
  }
}
