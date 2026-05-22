/*
 * XREFs of ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x180157A58
 * Callers:
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180158E78 (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIEdgyNotificationSourceClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIEdgyNotificationSourceClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059F68 (--$As@UIEdgyNotificationSourceClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall EdgyProcessor::HitTest(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        struct BamoEdgyNotificationSourceClientProxy **a3,
        struct InputSite **a4)
{
  __int64 **v6; // rdi
  __int64 **v7; // rbp
  __int64 *v8; // rsi
  __int64 *v9; // r15
  EdgyProcessor *v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 (__fastcall ***v13)(_QWORD); // rbx
  EdgyProcessor *v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v15)(_QWORD); // [rsp+70h] [rbp+18h] BYREF

  if ( a3 )
  {
    v14 = this;
    v6 = (__int64 **)*((_QWORD *)a2 + 12);
    v7 = (__int64 **)*((_QWORD *)a2 + 13);
LABEL_12:
    if ( v6 != v7 )
    {
      v8 = *v6;
      v9 = v6[1];
      while ( 1 )
      {
        if ( v8 == v9 )
        {
          v6 += 3;
          goto LABEL_12;
        }
        v10 = 0LL;
        v14 = 0LL;
        v11 = *(_QWORD *)(*v8 + 488);
        v12 = *(_QWORD *)(*v8 + 496);
        if ( v11 != v12 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IEdgyNotificationSourceClientProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 8),
                        (__int64 *)&v14) >= 0 )
              break;
            v11 += 16LL;
          }
          while ( v11 != v12 );
          v10 = v14;
        }
        v13 = (__int64 (__fastcall ***)(_QWORD))(((unsigned __int64)v10 - 8) & -(__int64)(v10 != 0LL));
        v15 = v13;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v15);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
        if ( v13 )
          break;
        ++v8;
      }
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v15);
      *a3 = (struct BamoEdgyNotificationSourceClientProxy *)v13;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v8);
      *a4 = (struct InputSite *)*v8;
      (*v13)[1](v13);
    }
  }
}
