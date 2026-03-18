/*
 * XREFs of ?IsInLowBox@@YAHXZ @ 0x140415EF4
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1401EF110 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x14005F7C0 (-OpenThreadToken@@YAJPEAPEAX@Z.c)
 */

__int64 IsInLowBox(void)
{
  int v0; // edi
  unsigned int v1; // ebx
  NTSTATUS v2; // ebp
  int TokenInformation; // [rsp+50h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+60h] [rbp+18h] BYREF

  v0 = 1;
  v1 = 0;
  TokenInformation = 1;
  TokenHandle = 0LL;
  v2 = OpenThreadToken(&TokenHandle);
  if ( v2 >= 0 )
  {
    ReturnLength = 0;
    v2 = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  if ( v2 >= 0 )
    v0 = TokenInformation;
  LOBYTE(v1) = v0 != 0;
  return v1;
}
