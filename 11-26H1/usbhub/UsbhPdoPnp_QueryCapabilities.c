/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x140032850
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2)
{
  _DWORD *v3; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // rsi
  __int16 SecurityQos; // di
  __int16 v6; // bx
  int SecurityQos_high; // edx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  _IO_SECURITY_CONTEXT *v11; // r8
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ecx
  BOOL v16; // eax
  int v18; // ecx
  BOOL v19; // eax

  v3 = PdoExt(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v6 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  v8 = SecurityQos_high | 0x10;
  WORD1(SecurityContext->SecurityQos) = v6;
  v9 = SecurityQos_high & 0xFFFFFFEF;
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  if ( (v3[295] & 0x10) == 0 )
    v9 = v8;
  HIDWORD(SecurityContext->SecurityQos) = v9;
  HIDWORD(SecurityContext->SecurityQos) = v9 & 0xFFFFFDBF | (v3[355] >> 3) & 0x40;
  LODWORD(SecurityContext->AccessState) = *((unsigned __int16 *)v3 + 714);
  HIDWORD(SecurityContext->AccessState) = -1;
  v10 = v3[298];
  if ( !v10 )
  {
    v10 = 0;
    if ( *((_QWORD *)v3 + 148) )
    {
      if ( (v3[355] & 0x40000) == 0 )
      {
        v10 = FdoExt(*((_QWORD *)v3 + 148))[1259];
        v3[298] = v10;
      }
    }
  }
  SecurityContext[1].FullCreateOptions = v10;
  v11 = SecurityContext + 1;
  SecurityContext->FullCreateOptions = 1;
  v12 = v3[355];
  v13 = HIDWORD(SecurityContext->SecurityQos) | 0x400;
  *(_SECURITY_QUALITY_OF_SERVICE **)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
  v14 = 5LL;
  HIDWORD(SecurityContext[2].AccessState) = 0;
  if ( (v12 & 0x100) != 0 )
  {
    LODWORD(SecurityContext[2].SecurityQos) = 3;
    HIDWORD(SecurityContext->SecurityQos) = v13 & 0xFFFFC7FC | 0x1803;
    v18 = 2;
    do
    {
      v19 = v18++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v11->SecurityQos) = v19 + 3;
      v11 = (_IO_SECURITY_CONTEXT *)((char *)v11 + 4);
      --v14;
    }
    while ( v14 );
  }
  else
  {
    LODWORD(SecurityContext[2].SecurityQos) = 1;
    HIDWORD(SecurityContext->SecurityQos) = v13 & 0xFFFFC7FC;
    v15 = 2;
    do
    {
      v16 = v15++ > (signed int)SecurityContext[1].FullCreateOptions;
      LODWORD(v11->SecurityQos) = v16 + 3;
      v11 = (_IO_SECURITY_CONTEXT *)((char *)v11 + 4);
      --v14;
    }
    while ( v14 );
  }
  if ( (v3[283] & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
