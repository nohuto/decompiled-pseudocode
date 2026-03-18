/*
 * XREFs of EtwTraceLifetimeAccum @ 0x140026660
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x140026EA0 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ?vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z @ 0x140027030 (-vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z.c)
 *     McTemplateK0xqnqNR3_EtwWriteTransfer @ 0x140027570 (McTemplateK0xqnqNR3_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceLifetimeAccum(int a1, char a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  char *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ebp
  _OWORD *v11; // rdi
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( (W32kEtwEnabledKeyword & 0x8000000000001000uLL) != 0
      && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
      && (qword_14029EDA0 & 0x8000000000001000uLL) != 0
      && (qword_14029EDA8 & 0x8000000000001000uLL) == qword_14029EDA8 )
    {
      v14 = a3;
      v6 = RGNOBJ::sizeSave((RGNOBJ *)&v14);
      v7 = v6 + 32;
      if ( v6 != -32 )
      {
        v8 = (char *)Win32AllocPoolImpl(0x100uLL, v7, 0x79737355u);
        if ( v8 )
        {
          v14 = a3;
          v9 = RGNOBJ::sizeSave((RGNOBJ *)&v14);
          v10 = v9 + 32;
          if ( v9 + 32 <= v7 )
          {
            *(_DWORD *)v8 = 32;
            v11 = v8 + 16;
            *((_DWORD *)v8 + 1) = 1;
            *((_DWORD *)v8 + 2) = v9 >> 4;
            *((_DWORD *)v8 + 3) = v9;
            if ( v9 >> 4 )
            {
              *v11 = *(_OWORD *)(a3 + 52);
            }
            else
            {
              *(_DWORD *)v11 = 0;
              *((_DWORD *)v8 + 5) = 0;
              *((_DWORD *)v8 + 6) = 0;
              *((_DWORD *)v8 + 7) = 0;
            }
            RGNOBJ::vDownload((RGNOBJ *)&v14, (struct _RECTL *)v8 + 2, v9 >> 4);
            if ( v10 )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                McTemplateK0xqnqNR3_EtwWriteTransfer(v12, (unsigned int)&ModifyRgnEvent, v13, a1, a2);
            }
          }
          GreDeleteFastMutex(v8);
        }
      }
    }
  }
}
