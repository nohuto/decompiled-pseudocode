/*
 * XREFs of ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1803EE7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ErrorCode@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x1803ED24C (-ErrorCode@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperation.c)
 *     ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1803EDE64 (-Get@-$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetResults(
        RTL_SRWLOCK *a1,
        void **a2)
{
  signed __int32 Ptr; // r8d
  __int64 v4; // rcx
  unsigned __int32 v6; // ebx
  signed __int32 v8; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v9; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  Ptr = (signed __int32)a1[-15].Ptr;
  v4 = (__int64)&a1[-21];
  v8 = -2;
  _InterlockedCompareExchange(&v8, Ptr, -2);
  if ( v8 != 3 )
  {
    if ( v8 != 1 )
    {
      v6 = -2147483634;
      RoOriginateError(2147483662LL, 0LL);
      return v6;
    }
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Get(
                           a1 + 13,
                           a2);
  }
  v9 = 0;
  Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
    v4,
    &v9);
  v6 = v9;
  if ( v9 >= 0 )
    return (unsigned int)Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Get(
                           a1 + 13,
                           a2);
  return v6;
}
