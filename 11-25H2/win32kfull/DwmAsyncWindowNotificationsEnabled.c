/*
 * XREFs of DwmAsyncWindowNotificationsEnabled @ 0x1403253EC
 * Callers:
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B4DB4 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncWindowNotificationsEnabled(PVOID Object)
{
  unsigned int v2; // edi
  _DWORD v4[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+4Ch] [rbp-Ch]

  v2 = -1073741823;
  if ( Object )
  {
    memset(v4, 0, sizeof(v4));
    v4[0] = 3145736;
    v5 = 0LL;
    v6 = 1073741915;
    LOWORD(v4[1]) = 0x8000;
    v7 = 1;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
