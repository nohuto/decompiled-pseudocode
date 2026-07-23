/*
 * XREFs of FindBitmapResource @ 0x140CC035C
 * Callers:
 *     BvgaDriverInitialize @ 0x140CC0150 (BvgaDriverInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     LdrAccessResource @ 0x140A8DDE0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140A8DE00 (LdrFindResource_U.c)
 */

PVOID __fastcall FindBitmapResource(ULONG_PTR a1, ULONG *a2)
{
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+20h] [rbp-38h] BYREF
  PVOID ResourceBuffer; // [rsp+28h] [rbp-30h] BYREF
  _LDR_RESOURCE_INFO v6; // [rsp+30h] [rbp-28h] BYREF

  v6.Name = a1;
  ResourceDataEntry = 0LL;
  ResourceBuffer = 0LL;
  v6.Type = 2LL;
  v6.Language = 0LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &v6, 3u, &ResourceDataEntry) < 0
    || LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &ResourceBuffer, a2) < 0 )
  {
    return 0LL;
  }
  else
  {
    return ResourceBuffer;
  }
}
