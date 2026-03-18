/*
 * XREFs of NtGdiPathToRegion @ 0x1400E5CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x14008F7C0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400E6028 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1400E6190 (-bInactive@DC@@QEBAHXZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1400E621C (-vDestroy@DC@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiPathToRegion(HDC a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  ULONG v4; // ecx
  DC *v5[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v6[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v7; // [rsp+98h] [rbp-68h]
  _BYTE v8[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v9; // [rsp+128h] [rbp+28h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v1 = 0LL;
  if ( !v5[0] )
  {
    v4 = 87;
LABEL_9:
    EngSetLastError(v4);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v5[0]) )
  {
    v4 = 1003;
    goto LABEL_9;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v6, (struct XDCOBJ *)v5);
  if ( v7 )
  {
    RGNMEMOBJ::RGNMEMOBJ(
      (RGNMEMOBJ *)&v9,
      (struct EPATHOBJ *)v6,
      *(unsigned __int8 *)(*((_QWORD *)v5[0] + 122) + 214LL),
      0LL);
    if ( v9 )
    {
      v2 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v9);
      if ( !v2 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v9);
    }
    else
    {
      v2 = 0LL;
    }
    v1 = v2;
  }
  else
  {
    EngSetLastError(8u);
  }
  DC::vDestroy(v5[0]);
  EPATHOBJ::vUnlock((EPATHOBJ *)v6);
  CAutoTGO::vUnguard((CAutoTGO *)v8);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v1;
}
