/*
 * XREFs of AlpcpExposeCapturedContextAttribute @ 0x140AE4528
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     AlpcpContextAttribute64to32 @ 0x140AE462C (AlpcpContextAttribute64to32.c)
 */

void __fastcall AlpcpExposeCapturedContextAttribute(int a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  __int64 v6; // rdi
  char PreviousMode; // bp
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx

  if ( a4 )
  {
    v4 = (_DWORD *)(a4 + 4);
    v6 = (int)a3;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode )
      RtlWriteULongToUser((_DWORD *)(a4 + 4), 0);
    else
      *v4 = 0;
    if ( (v6 & 0x20000000) != 0 )
    {
      v10 = v6;
      v11 = v6 & 0x40000000;
      v12 = v10 >> 63;
      if ( a1 < 0 )
      {
        LOBYTE(a3) = PreviousMode;
        v16 = (v12 & 0xC) + 8;
        v17 = v16 + 16;
        if ( !v11 )
          v17 = v16;
        AlpcpContextAttribute64to32(a2, a4 + v17, a3);
      }
      else
      {
        v13 = (v12 & 0x18) + 8;
        v14 = v13 + 32;
        if ( !v11 )
          v14 = v13;
        v15 = (void *)(a4 + v14);
        if ( PreviousMode )
          RtlCopyToUser(v15, a2, 0x20uLL);
        else
          RtlCopyVolatileMemory(v15, a2, 0x20uLL);
      }
      if ( *a2 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v4, 0x20000000);
        else
          *v4 = 0x20000000;
      }
    }
  }
}
