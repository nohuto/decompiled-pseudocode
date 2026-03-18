/*
 * XREFs of EtwTraceAuditApiSetWindowsHookEx @ 0x140102630
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qzppq_EtwWriteTransfer @ 0x1401027E0 (McTemplateK0qzppq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall EtwTraceAuditApiSetWindowsHookEx(int a1, __int16 *a2, char a3, char a4, int a5)
{
  int v7; // ebx
  _BYTE *v8; // rdx
  __int64 v9; // r8
  char v10; // al
  __int16 *v11; // r10
  __int64 v12; // r9
  _WORD *v13; // rax
  __int16 v14; // r11
  int v15; // [rsp+40h] [rbp-288h]
  _BYTE v16[528]; // [rsp+90h] [rbp-238h] BYREF

  v7 = a1;
  v15 = a1;
  v8 = 0LL;
  LODWORD(v9) = 1024;
  if ( (W32kEtwEnabledKeyword & 0x400) != 0 )
  {
    if ( (unsigned __int8)(byte_1402A9DD8 - 1) <= 2u
      || (qword_1402A9DC0 & 0x400) == 0
      || (v10 = 1, (qword_1402A9DC8 & 0x400) != qword_1402A9DC8) )
    {
      v10 = 0;
    }
    if ( v10 )
    {
      if ( a2 )
      {
        v11 = a2;
        v12 = 2147483646LL;
        v9 = 260LL;
        v13 = v16;
        a1 = 0;
        while ( v9 )
        {
          if ( !v12 )
            goto LABEL_14;
          v14 = *v11;
          if ( !*v11 )
            goto LABEL_14;
          ++v11;
          *v13++ = v14;
          --v9;
          --v12;
          ++a1;
        }
        --v13;
        --a1;
LABEL_14:
        *v13 = 0;
        v8 = v16;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000000LL) != 0 )
        McTemplateK0qzppq_EtwWriteTransfer(a1, (_DWORD)v8, v9, v7, (__int64)v8, a3, a4, a5, v15);
    }
  }
}
