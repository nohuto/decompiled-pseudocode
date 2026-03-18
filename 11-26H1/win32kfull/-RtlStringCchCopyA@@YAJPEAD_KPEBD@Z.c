/*
 * XREFs of ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x140293F5C
 * Callers:
 *     EditionInitializeWppLogging @ 0x140139350 (EditionInitializeWppLogging.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  char v6; // al
  char *v7; // rcx
  __int64 result; // rax

  v3 = a1;
  v4 = 16LL;
  v5 = "win32kfull" - a1;
  do
  {
    if ( v4 == -2147483630 )
      break;
    v6 = v3[v5];
    if ( !v6 )
      break;
    *v3++ = v6;
    --v4;
  }
  while ( v4 );
  v7 = v3 - 1;
  result = v4 == 0 ? 0x80000005 : 0;
  if ( v4 )
    v7 = v3;
  *v7 = 0;
  return result;
}
