/*
 * XREFs of GetExpandedResourceExclusiveCpuCount @ 0x18000F310
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001150 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18000FE80 (__security_check_cookie.c)
 */

HRESULT __stdcall GetExpandedResourceExclusiveCpuCount(ULONG *exclusiveCpuCount)
{
  int LargestValidResourceRequest; // ebx
  HRESULT v3; // ebx
  int v5; // [rsp+30h] [rbp-39h] BYREF
  ULONG v6; // [rsp+34h] [rbp-35h] BYREF
  HRESULT v7; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v8[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+60h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp+7h] BYREF
  HRESULT *v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]
  ULONG *v13; // [rsp+A0h] [rbp+37h]
  __int64 v14; // [rsp+A8h] [rbp+3Fh]

  *exclusiveCpuCount = 0;
  v5 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v5, 0LL);
  if ( v5 == 5 )
  {
    *exclusiveCpuCount = 6;
  }
  else
  {
    memset(v8, 0, sizeof(v8));
    v9 = 0LL;
    LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v8);
    if ( LargestValidResourceRequest < 0 )
    {
      v3 = LargestValidResourceRequest | 0x10000000;
      goto LABEL_7;
    }
    *exclusiveCpuCount = DWORD1(v8[0]);
  }
  v3 = 0;
LABEL_7:
  if ( (unsigned int)dword_180017038 > 4 )
  {
    v6 = *exclusiveCpuCount;
    v14 = 4LL;
    v13 = &v6;
    v12 = 4LL;
    v11 = &v7;
    v7 = v3;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180017038, byte_180013D5D, 0LL, 0LL, 4u, &v10);
  }
  return v3;
}
