/*
 * XREFs of PopPotsLogDirtyPowerTransition @ 0x140CDD068
 * Callers:
 *     PopDiagTraceDirtyTransition @ 0x140CD7F2C (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopPotsLogDirtyPowerTransition(int a1, unsigned int a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  int v7; // [rsp+30h] [rbp-59h] BYREF
  int v8; // [rsp+34h] [rbp-55h] BYREF
  int v9; // [rsp+38h] [rbp-51h] BYREF
  __int64 v10; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-39h] BYREF
  int *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  int *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  int *v16; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  char v18[16]; // [rsp+A0h] [rbp+17h] BYREF
  __int64 *v19; // [rsp+B0h] [rbp+27h]
  __int64 v20; // [rsp+B8h] [rbp+2Fh]
  wchar_t Dst[12]; // [rsp+C0h] [rbp+37h] BYREF

  if ( a1 )
  {
    v5 = a2 != 0 ? 0x20000 : 0;
    swprintf_s(Dst, 9uLL, L"%08X", a2);
    if ( PotsPowerTransitionsHandleRegistered )
    {
      if ( (unsigned int)dword_140E081E0 > 5 && tlgKeywordOn((__int64)&dword_140E081E0, 0x400000000000LL) )
      {
        v8 = a1;
        v13 = 4LL;
        v12 = &v7;
        v15 = 4LL;
        v14 = &v8;
        v6 = v5 | 0x8000;
        v17 = 4LL;
        v7 = 4;
        if ( !a3 )
          v6 = v5;
        v9 = v6;
        v16 = &v9;
        tlgCreate1Sz_wchar_t((__int64)v18, Dst);
        v10 = 0x1000000LL;
        v19 = &v10;
        v20 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E081E0,
          (unsigned __int8 *)&byte_140051937,
          0LL,
          0LL,
          7u,
          &v11);
      }
    }
  }
}
