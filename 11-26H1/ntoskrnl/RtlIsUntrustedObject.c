/*
 * XREFs of RtlIsUntrustedObject @ 0x1404C8000
 * Callers:
 *     SeGetImageRequiredSigningLevel @ 0x140A8F9E8 (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x14072ACE0 (ZwQuerySecurityObject.c)
 *     ObQuerySecurityObject @ 0x140AA74AC (ObQuerySecurityObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  int v4; // r15d
  __int16 *Pool2; // rdi
  char v7; // r12
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  __int16 v10; // ax
  __int64 v11; // rax
  _BYTE *v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // edx
  _BYTE *v15; // rcx
  int v16; // eax
  NTSTATUS SecurityObject; // eax
  ULONG LengthNeeded[4]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE P[128]; // [rsp+40h] [rbp-B8h] BYREF

  LengthNeeded[0] = 0;
  *IsUntrustedObject = 1;
  v4 = (int)Object;
  Pool2 = (__int16 *)P;
  if ( Object )
  {
    if ( !Handle )
    {
      v7 = 0;
      result = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)P, 124, (__int64)LengthNeeded);
      v9 = result;
      if ( result >= 0 )
        goto LABEL_6;
      if ( result != -1073741789 )
        return result;
      Pool2 = (__int16 *)ExAllocatePool2(0x41uLL);
      if ( Pool2 )
      {
        v7 = 1;
        SecurityObject = ObQuerySecurityObject(v4, 16, (_DWORD)Pool2, 124, (__int64)LengthNeeded);
        goto LABEL_28;
      }
      return -1073741801;
    }
    return -1073741811;
  }
  if ( !Handle )
    return -1073741811;
  v7 = 0;
  result = ZwQuerySecurityObject(Handle, 0x10u, P, 0x7Cu, LengthNeeded);
  v9 = result;
  if ( result >= 0 )
    goto LABEL_6;
  if ( result == -1073741789 )
  {
    Pool2 = (__int16 *)ExAllocatePool2(0x41uLL);
    if ( Pool2 )
    {
      v7 = 1;
      SecurityObject = ZwQuerySecurityObject(Handle, 0x10u, Pool2, 0x7Cu, LengthNeeded);
LABEL_28:
      v9 = SecurityObject;
      if ( SecurityObject < 0 )
      {
LABEL_29:
        ExFreePoolWithTag(Pool2, 0);
        return v9;
      }
LABEL_6:
      v10 = Pool2[1];
      if ( (v10 & 0x10) != 0 )
      {
        if ( v10 >= 0 )
        {
          v12 = (_BYTE *)*((_QWORD *)Pool2 + 3);
        }
        else
        {
          v11 = *((unsigned int *)Pool2 + 3);
          if ( !(_DWORD)v11 )
            goto LABEL_21;
          v12 = (char *)Pool2 + v11;
        }
        if ( v12 )
        {
          v13 = 0;
LABEL_12:
          v14 = 0;
          v15 = v12 + 8;
          while ( v14 < *((unsigned __int16 *)v12 + 2) )
          {
            if ( v14 >= v13 && *v15 == 17 )
            {
              v13 = v14;
              if ( !v15 )
                break;
              if ( (v15[1] & 8) != 0 )
                goto LABEL_12;
              v16 = (unsigned __int8)v15[9];
              if ( !(_BYTE)v16 || *(_DWORD *)&v15[4 * (v16 - 1) + 16] < 0x2000u )
                goto LABEL_22;
              break;
            }
            ++v14;
            v15 += *((unsigned __int16 *)v15 + 1);
          }
        }
      }
LABEL_21:
      *IsUntrustedObject = 0;
LABEL_22:
      if ( !v7 )
        return v9;
      goto LABEL_29;
    }
    return -1073741801;
  }
  return result;
}
