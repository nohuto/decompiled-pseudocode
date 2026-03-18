/*
 * XREFs of FastGetProfileIntsW @ 0x1400A8D10
 * Callers:
 *     <none>
 * Callees:
 *     FastGetProfileIntW @ 0x1400A96F0 (FastGetProfileIntW.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall FastGetProfileIntsW(int a1, __int64 a2, unsigned int a3, int a4)
{
  PULONG *v6; // rdi
  __int64 i; // rsi
  ULONG v8; // r9d
  int v9; // ebx
  BYTE *Text; // rdx
  __int64 v11; // rbx
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+30h] [rbp-98h] BYREF
  _WORD v14[40]; // [rsp+40h] [rbp-88h] BYREF

  if ( a3 )
  {
    v6 = (PULONG *)(a2 + 24);
    for ( i = a3; i; --i )
    {
      v8 = *((unsigned __int16 *)v6 - 8);
      MessageResourceEntry = 0LL;
      v9 = 0;
      if ( RtlFindMessage(hModuleWinKernel, 0xBu, 0, v8, &MessageResourceEntry) >= 0 )
      {
        Text = MessageResourceEntry->Text;
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)&Text[2 * v11] );
        v9 = v11 - 2;
        if ( v9 < 0 )
          goto LABEL_7;
        if ( v9 > 39 )
          v9 = 39;
        memmove(v14, Text, 2LL * v9);
      }
      v14[v9] = 0;
LABEL_7:
      FastGetProfileIntW(a1, *((_DWORD *)v6 - 6), (int)v14, *((_DWORD *)v6 - 2), *v6, a4);
      v6 += 4;
    }
  }
  return 1LL;
}
