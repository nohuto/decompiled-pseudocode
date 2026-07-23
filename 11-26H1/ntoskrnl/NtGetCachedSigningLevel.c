/*
 * XREFs of NtGetCachedSigningLevel @ 0x140815170
 * Callers:
 *     DifNtGetCachedSigningLevelWrapper @ 0x14067C570 (DifNtGetCachedSigningLevelWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     SeGetCachedSigningLevel @ 0x140AAB6B0 (SeGetCachedSigningLevel.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  PVOID v10; // r12
  KPROCESSOR_MODE PreviousMode; // si
  int CachedSigningLevel; // edi
  unsigned int ULongFromUser; // ecx
  ULONG v14; // eax
  char v16; // [rsp+30h] [rbp-C8h] BYREF
  ULONG v17; // [rsp+34h] [rbp-C4h] BYREF
  size_t Size; // [rsp+38h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  int v20; // [rsp+48h] [rbp-B0h]
  PULONG v21; // [rsp+50h] [rbp-A8h]
  PSE_SIGNING_LEVEL v22; // [rsp+58h] [rbp-A0h]
  PULONG v23; // [rsp+60h] [rbp-98h]
  _BYTE Src[64]; // [rsp+70h] [rbp-88h] BYREF

  v22 = SigningLevel;
  v21 = Flags;
  v23 = ThumbprintAlgorithm;
  v10 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  Size = 64LL;
  v17 = 0;
  v16 = 0;
  if ( File && Flags && SigningLevel )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    CachedSigningLevel = ObReferenceObjectByHandle(File, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v10 = Object;
    if ( CachedSigningLevel >= 0 )
    {
      CachedSigningLevel = SeGetCachedSigningLevel(
                             (_DWORD)Object,
                             (unsigned int)&v17,
                             (unsigned int)&v16,
                             (unsigned __int64)Src & -(__int64)(Thumbprint != 0LL),
                             (unsigned __int64)&Size & -(__int64)(Thumbprint != 0LL),
                             ((unsigned __int64)&Size + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)Thumbprint >> 64));
      if ( CachedSigningLevel >= 0 )
      {
        if ( PreviousMode )
          RtlWriteULongToUser(v21, v17);
        else
          *v21 = v17;
        if ( PreviousMode )
          RtlWriteUCharToUser(v22, v16);
        else
          *v22 = v16;
        if ( ThumbprintSize )
        {
          if ( PreviousMode == 1 )
            ProbeForWrite(ThumbprintSize, 4uLL, 4u);
          if ( (v17 & 2) != 0 )
          {
            if ( PreviousMode )
              ULongFromUser = RtlReadULongFromUser(ThumbprintSize);
            else
              ULongFromUser = *ThumbprintSize;
            v14 = Size;
            if ( ULongFromUser >= (unsigned int)Size && Thumbprint )
            {
              if ( PreviousMode )
                RtlCopyToUser(Thumbprint, Src, (unsigned int)Size);
              else
                RtlCopyVolatileMemory(Thumbprint, Src, (unsigned int)Size);
              v14 = Size;
            }
            else
            {
              CachedSigningLevel = -1073741789;
              v20 = -1073741789;
            }
            if ( PreviousMode )
              RtlWriteULongToUser(ThumbprintSize, v14);
            else
              *ThumbprintSize = v14;
            if ( v23 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(v23, SHIDWORD(Size));
              else
                *v23 = HIDWORD(Size);
            }
          }
          else if ( PreviousMode )
          {
            RtlWriteULongToUser(ThumbprintSize, 0);
          }
          else
          {
            *ThumbprintSize = 0;
          }
        }
      }
    }
  }
  else
  {
    CachedSigningLevel = -1073741811;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return CachedSigningLevel;
}
