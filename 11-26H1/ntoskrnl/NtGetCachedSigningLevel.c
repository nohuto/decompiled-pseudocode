/*
 * XREFs of NtGetCachedSigningLevel @ 0x14080F6E0
 * Callers:
 *     DifNtGetCachedSigningLevelWrapper @ 0x140678990 (DifNtGetCachedSigningLevelWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x14077F710 (RtlWriteUCharToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     SeGetCachedSigningLevel @ 0x140AAD5F0 (SeGetCachedSigningLevel.c)
 */

__int64 __fastcall NtGetCachedSigningLevel(HANDLE Handle, _DWORD *a2, _BYTE *a3, void *a4, int *Address, _DWORD *a6)
{
  PVOID v10; // r12
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS CachedSigningLevel; // edi
  unsigned int ULongFromUser; // ecx
  int v14; // eax
  char v16; // [rsp+30h] [rbp-C8h] BYREF
  int v17; // [rsp+34h] [rbp-C4h] BYREF
  size_t Size; // [rsp+38h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  int v20; // [rsp+48h] [rbp-B0h]
  _DWORD *v21; // [rsp+50h] [rbp-A8h]
  _BYTE *v22; // [rsp+58h] [rbp-A0h]
  _DWORD *v23; // [rsp+60h] [rbp-98h]
  _BYTE Src[64]; // [rsp+70h] [rbp-88h] BYREF

  v22 = a3;
  v21 = a2;
  v23 = a6;
  v10 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  Size = 64LL;
  v17 = 0;
  v16 = 0;
  if ( Handle && a2 && a3 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    CachedSigningLevel = ObReferenceObjectByHandle(
                           Handle,
                           1u,
                           (POBJECT_TYPE)IoFileObjectType,
                           PreviousMode,
                           &Object,
                           0LL);
    v10 = Object;
    if ( CachedSigningLevel >= 0 )
    {
      CachedSigningLevel = SeGetCachedSigningLevel(
                             (_DWORD)Object,
                             (unsigned int)&v17,
                             (unsigned int)&v16,
                             (unsigned __int64)Src & -(__int64)(a4 != 0LL),
                             (unsigned __int64)&Size & -(__int64)(a4 != 0LL),
                             ((unsigned __int64)&Size + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a4 >> 64));
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
        if ( Address )
        {
          if ( PreviousMode == 1 )
            ProbeForWrite(Address, 4uLL, 4u);
          if ( (v17 & 2) != 0 )
          {
            if ( PreviousMode )
              ULongFromUser = RtlReadULongFromUser((unsigned int *)Address);
            else
              ULongFromUser = *Address;
            v14 = Size;
            if ( ULongFromUser >= (unsigned int)Size && a4 )
            {
              if ( PreviousMode )
                RtlCopyToUser(a4, Src, (unsigned int)Size);
              else
                RtlCopyVolatileMemory(a4, Src, (unsigned int)Size);
              v14 = Size;
            }
            else
            {
              CachedSigningLevel = -1073741789;
              v20 = -1073741789;
            }
            if ( PreviousMode )
              RtlWriteULongToUser(Address, v14);
            else
              *Address = v14;
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
            RtlWriteULongToUser(Address, 0);
          }
          else
          {
            *Address = 0;
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
  return (unsigned int)CachedSigningLevel;
}
