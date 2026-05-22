/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x180157828
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIEdgyDragSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyDragSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005B2B8 (--$As@UIEdgyDragSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BDDC (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18014BFDC (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall EdgyProcessor::HitTest(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        struct BamoEdgyDragSourceClientProxy **a3,
        struct BamoDragManagerClientProxy **a4,
        struct InputSite **a5,
        struct InputSite **a6)
{
  __int64 **v8; // rsi
  __int64 **v9; // r15
  unsigned __int64 v10; // r14
  __int64 *v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rbx
  __m128i v17; // xmm6
  struct BamoDragManagerClientProxy *v18; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD); // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int64 *v24; // [rsp+38h] [rbp-28h]
  GUID Buf1; // [rsp+40h] [rbp-20h] BYREF
  struct BamoDragManagerClientProxy *v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+50h] BYREF

  if ( a3 )
  {
    v26 = this;
    Buf1 = GUID_NULL;
    if ( a4 )
    {
      v8 = (__int64 **)*((_QWORD *)a2 + 12);
      v9 = (__int64 **)*((_QWORD *)a2 + 13);
      if ( v8 != v9 )
      {
        v10 = *(_QWORD *)Buf1.Data4;
        v22 = *(_QWORD *)Buf1.Data4;
        v23 = *(_QWORD *)&Buf1.Data1;
        while ( 2 )
        {
          v11 = *v8;
          v12 = v8[1];
          v24 = v12;
          while ( v11 != v12 )
          {
            if ( !memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) )
            {
              v13 = 0LL;
              v27 = 0LL;
              v14 = *(_QWORD *)(*v11 + 488);
              v15 = *(_QWORD *)(*v11 + 496);
              if ( v14 != v15 )
              {
                do
                {
                  if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyDragSourceClientProxy>(
                              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                              &v27) >= 0 )
                    break;
                  v14 += 16LL;
                }
                while ( v14 != v15 );
                v13 = v27;
              }
              v16 = (v13 - 8) & -(__int64)(v13 != 0);
              v21 = (__int64 (__fastcall ***)(_QWORD))v16;
              Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v21);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
              if ( v16 )
              {
                Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v21);
                *a3 = (struct BamoEdgyDragSourceClientProxy *)v16;
                v17 = *(__m128i *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 24LL))(v16 + 8);
                Buf1 = (GUID)v17;
                wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v11);
                *a5 = (struct InputSite *)*v11;
                v10 = _mm_srli_si128(v17, 8).m128i_u64[0];
                v22 = v10;
                v23 = v17.m128i_i64[0];
              }
              else
              {
                v10 = v22;
              }
              if ( v16 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            }
            if ( memcmp_0(&Buf1, &GUID_NULL, 0x10uLL) && *a3 )
            {
              InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v11, (__int64 *)&v26);
              v18 = v26;
              if ( v26 )
              {
                v19 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)v26 + 1) + 80LL))((char *)v26 + 8);
                v20 = *v19 - v23;
                if ( *v19 == v23 )
                  v20 = v19[1] - v10;
                if ( !v20 )
                {
                  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v26);
                  *a4 = v18;
                  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v11);
                  *a6 = (struct InputSite *)*v11;
                  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v26);
                  return;
                }
              }
              Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v26);
            }
            ++v11;
            v12 = v24;
          }
          v8 += 3;
          if ( v8 != v9 )
            continue;
          break;
        }
      }
    }
  }
}
