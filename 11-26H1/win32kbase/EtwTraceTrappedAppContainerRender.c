/*
 * XREFs of EtwTraceTrappedAppContainerRender @ 0x1401FA010
 * Callers:
 *     <none>
 * Callees:
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x140158C04 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140160B14 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     McTemplateK0szsz_EtwWriteTransfer @ 0x1401FA344 (McTemplateK0szsz_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceTrappedAppContainerRender(PEPROCESS Process, PEPROCESS a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbx
  PACCESS_TOKEN v12; // r14
  PACCESS_TOKEN v13; // rsi
  char v14; // cl
  const WCHAR *v15; // rsi
  const WCHAR *v16; // r12
  void *ProcessImageFileName; // rbx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  const WCHAR *v25; // [rsp+40h] [rbp-20h] BYREF
  char *v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h] BYREF
  char v29; // [rsp+A0h] [rbp+40h] BYREF
  char v30; // [rsp+A8h] [rbp+48h] BYREF

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
  {
    v27 = 256LL;
    v28 = 256LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v25, 0x100u, a3, a4);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v26, 0x100u, v6, v7);
    if ( v25 )
    {
      v11 = v26;
      if ( v26 )
      {
        v30 = 0;
        v29 = 0;
        v12 = 0LL;
        v13 = PsReferencePrimaryToken(Process);
        RtlQueryPackageIdentity(v13, v25, &v27, 0LL, 0LL, &v30);
        PsDereferencePrimaryToken(v13);
        if ( a2 && (v12 = PsReferencePrimaryToken(a2), (int)RtlQueryPackageIdentity(v12, v11, &v28, 0LL, 0LL, &v29) < 0) )
        {
          v14 = 0;
          v29 = 0;
        }
        else
        {
          v14 = v29;
        }
        if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000) != 0 )
        {
          v15 = &word_14026AF94;
          v16 = &word_14026AF94;
          if ( v14 )
            v16 = (const WCHAR *)v11;
          if ( a2 )
            ProcessImageFileName = (void *)PsGetProcessImageFileName(a2);
          else
            ProcessImageFileName = &unk_140269890;
          if ( v30 )
            v15 = v25;
          v18 = PsGetProcessImageFileName(Process);
          McTemplateK0szsz_EtwWriteTransfer(
            v20,
            v19,
            v21,
            v18,
            (__int64)v15,
            (__int64)ProcessImageFileName,
            (__int64)v16);
        }
        if ( v12 )
          PsDereferencePrimaryToken(v12);
      }
    }
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v26, v8, v9, v10);
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>((char **)&v25, v22, v23, v24);
  }
}
