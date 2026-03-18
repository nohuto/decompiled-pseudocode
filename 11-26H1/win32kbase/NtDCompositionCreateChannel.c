/*
 * XREFs of NtDCompositionCreateChannel @ 0x140168920
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1401022D8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtDCompositionCreateChannel(void *a1, unsigned int *a2, __int64 a3)
{
  int v6; // edi
  unsigned int Src; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v9; // [rsp+24h] [rbp-34h] BYREF
  void *v10; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  Src = 0;
  v11 = 0;
  v10 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v9 = 0;
    RtlCopyFromUser(&v9, a2, 4uLL);
    v11 = v9;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
    v6 = 0;
  if ( v6 >= 0 )
  {
    v6 = DirectComposition::CApplicationChannel::Create(&Src, &v11, &v10);
    if ( v6 >= 0 )
    {
      *a2 = v11;
      RtlCopyToUser(a1, &Src, 4uLL);
      RtlWriteULong64ToUser(a3, v10);
    }
  }
  return (unsigned int)v6;
}
