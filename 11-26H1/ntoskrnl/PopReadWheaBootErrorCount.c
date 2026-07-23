/*
 * XREFs of PopReadWheaBootErrorCount @ 0x140CD690C
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 * Callees:
 *     WheaGetErrorSourceInfo @ 0x14084E4C0 (WheaGetErrorSourceInfo.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopReadWheaBootErrorCount(int *a1)
{
  unsigned int v2; // edi
  int ErrorSourceInfo; // eax
  PVOID v4; // rcx
  int v5; // r9d
  _DWORD *v6; // r8
  __int64 v7; // r10
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  P = 0LL;
  v2 = -1073741823;
  if ( a1 )
  {
    *a1 = 0;
    ErrorSourceInfo = WheaGetErrorSourceInfo(7, &v9, (__int64 *)&P);
    v4 = P;
    v2 = ErrorSourceInfo;
    if ( ErrorSourceInfo >= 0 )
    {
      if ( !P )
        return v2;
      if ( v9 )
      {
        v5 = *a1;
        v6 = P;
        v7 = v9;
        do
        {
          v5 += *v6;
          v6 += 2;
          *a1 = v5;
          --v7;
        }
        while ( v7 );
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x50455654u);
  }
  return v2;
}
