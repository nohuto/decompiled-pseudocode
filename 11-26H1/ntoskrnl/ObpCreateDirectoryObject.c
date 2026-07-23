/*
 * XREFs of ObpCreateDirectoryObject @ 0x140AFC300
 * Callers:
 *     NtCreateDirectoryObject @ 0x140AFC2C0 (NtCreateDirectoryObject.c)
 *     NtCreateDirectoryObjectEx @ 0x140AFC2E0 (NtCreateDirectoryObjectEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlIsSandboxedToken @ 0x1408FBA10 (RtlIsSandboxedToken.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(_QWORD *a1, int a2, __int64 a3, void *a4, int a5)
{
  PVOID v8; // rsi
  char PreviousMode; // r14
  int inserted; // edi
  _QWORD *v11; // rdi
  int v12; // r13d
  int v13; // edx
  int v14; // eax
  __int64 ULong64FromUser; // rax
  PVOID *Object; // [rsp+20h] [rbp-78h]
  PVOID v18; // [rsp+60h] [rbp-38h] BYREF
  PVOID v19; // [rsp+68h] [rbp-30h] BYREF
  __int64 v20; // [rsp+70h] [rbp-28h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_3;
  if ( (a5 & 2) != 0 )
  {
LABEL_23:
    inserted = -1073741581;
    goto LABEL_16;
  }
  ULong64FromUser = RtlReadULong64FromUser(a1);
  RtlWriteULong64ToUser(a1, ULong64FromUser);
LABEL_3:
  if ( !a4
    || (v18 = 0LL,
        inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v18, 0LL),
        v8 = v18,
        inserted >= 0) )
  {
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ObpDirectoryObjectType,
                 a3,
                 PreviousMode,
                 (__int64)Object,
                 344,
                 0,
                 0,
                 &v19,
                 0LL);
    if ( inserted >= 0 )
    {
      v11 = v19;
      memset_0(v19, 0, 0x158uLL);
      v11[37] = 0LL;
      *((_DWORD *)v11 + 85) = -1;
      v12 = 0;
      if ( v8 )
      {
        v12 = 4;
        v11[39] = v8;
        v8 = 0LL;
        v18 = 0LL;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          v12 = 20;
      }
      v13 = v12 | 8;
      if ( (a5 & 1) == 0 )
        v13 = v12;
      v14 = v13 | 0x20;
      if ( (a5 & 2) == 0 )
        v14 = v13;
      *((_DWORD *)v11 + 84) |= v14;
      inserted = ObInsertObjectEx((char *)v11, 0LL, a2, 0, 0, 0LL, &v20);
      v19 = 0LL;
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v20);
      else
        *a1 = v20;
    }
  }
LABEL_16:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v19 )
    ObfDereferenceObject(v19);
  return (unsigned int)inserted;
}
