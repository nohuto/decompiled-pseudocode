/*
 * XREFs of NVMeAllocateAsyncEventCommands @ 0x14000EB70
 * Callers:
 *     NVMeStartAsyncEventCommands @ 0x14000D5D0 (NVMeStartAsyncEventCommands.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140005C10 (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x14000FA50 (NVMeFreeDmaBuffer.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeAllocateAsyncEventCommands(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // r14
  __int64 v3; // rbp
  unsigned int v4; // edi
  unsigned int v6; // ebx
  int DmaBuffer; // eax
  char *v8; // r9
  __int64 v9; // rax
  void *v11; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = (_QWORD *)(a1 + 1392);
  v3 = 0LL;
  v11 = 0LL;
  v4 = 4;
  v12 = 0LL;
  if ( (unsigned int)*(unsigned __int8 *)(v1 + 259) + 1 < 4 )
    v4 = *(unsigned __int8 *)(v1 + 259) + 1;
  if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v4 << 7, 1701672526LL) || !*v2 )
  {
    v8 = (char *)v11;
    v6 = v4 << 13;
  }
  else
  {
    v6 = v4 << 13;
    DmaBuffer = NVMeAllocateDmaBuffer(a1, v4 << 13);
    v8 = (char *)v11;
    if ( !DmaBuffer && v11 )
    {
      if ( v6 >> 2 )
      {
        memset(v11, 0, 4LL * (v6 >> 2));
        v8 = (char *)v11;
      }
      if ( v4 )
      {
        v9 = v4;
        do
        {
          v3 += 128LL;
          *(_QWORD *)(*v2 + v3 - 32) = v8;
          *(_QWORD *)(*v2 + v3 - 24) = v12;
          v12 += 0x2000LL;
          v8 = (char *)v11 + 0x2000;
          v11 = (char *)v11 + 0x2000;
          --v9;
        }
        while ( v9 );
        return v4;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
  {
    StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
    v8 = (char *)v11;
  }
  if ( *v2 )
  {
    StorPortExtendedFunction(1LL, a1, *v2, v8);
    v8 = (char *)v11;
    *v2 = 0LL;
  }
  if ( v8 )
    NVMeFreeDmaBuffer(a1, v6, &v11, v12);
  return 0LL;
}
