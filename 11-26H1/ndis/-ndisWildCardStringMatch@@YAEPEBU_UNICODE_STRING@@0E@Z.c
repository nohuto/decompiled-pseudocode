/*
 * XREFs of ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x140162920
 * Callers:
 *     ?ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x14006CBD0 (-ndisPDPcwUtilizationCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ?ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140076A40 (-ndisPDPcwQueueDepthCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 *     ndisNdkPcwAddCounter @ 0x1400BCA80 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwRemoveCounter @ 0x14014387C (ndisNdkPcwRemoveCounter.c)
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1401626D0 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisWildCardStringMatch(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        char a3)
{
  wchar_t *Buffer; // r8
  wchar_t *v4; // r13
  unsigned __int16 v5; // si
  unsigned __int16 v6; // r14
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // di
  unsigned __int16 v9; // r15
  unsigned __int16 v10; // r12
  char v11; // bp
  wchar_t v12; // dx
  LONG v14; // eax
  WCHAR String1; // [rsp+70h] [rbp+8h] BYREF
  wchar_t *v16; // [rsp+78h] [rbp+10h]
  WCHAR String2; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(String2) = a3;
  Buffer = a2->Buffer;
  v4 = a1->Buffer;
  v5 = a1->Length >> 1;
  v6 = a2->Length >> 1;
  v7 = 0;
  v16 = Buffer;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  while ( 2 )
  {
    v11 = 0;
    while ( v7 < v5 )
    {
      v12 = v4[v7];
      if ( v12 == 42 )
      {
        v11 = 1;
        v9 = v7;
        v10 = v8;
      }
      else
      {
        if ( v12 == 63 )
        {
          if ( v8 == v6 )
            goto LABEL_8;
        }
        else
        {
          if ( v8 == v6 )
            goto LABEL_8;
          String1 = v4[v7];
          String2 = Buffer[v8];
          v14 = RtlCompareUnicodeStrings(&String1, 1uLL, &String2, 1uLL, 1u);
          Buffer = v16;
          if ( v14 )
            goto LABEL_8;
        }
        ++v8;
      }
      ++v7;
    }
    if ( v8 == v6 )
      return 1;
LABEL_8:
    if ( v11 && v8 < v6 )
    {
      v7 = v9;
      v8 = v10 + 1;
      continue;
    }
    return 0;
  }
}
