/*
 * XREFs of PopPlInitPowerPlane @ 0x1407E7FB0
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x140507D2C (PopPlRegisterPowerPlane.c)
 * Callees:
 *     PopPlInitDevices @ 0x1407E7E30 (PopPlInitDevices.c)
 *     PopPlInitWString @ 0x1407E80A8 (PopPlInitWString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitPowerPlane(__int64 a1, __int64 a2, unsigned __int64 a3, UNICODE_STRING **a4)
{
  UNICODE_STRING *v4; // rbx
  int inited; // edi
  UNICODE_STRING *Pool2; // rax
  wchar_t *Buffer; // rcx
  __int64 result; // rax

  v4 = 0LL;
  if ( a1 + 52 <= a3 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      inited = PopPlInitWString(Pool2);
      if ( inited >= 0 )
      {
        *(_QWORD *)&v4[1].Length = 0LL;
        inited = PopPlInitDevices(
                   (__int64)v4,
                   a1 + 8,
                   *(unsigned int *)(a1 + 4),
                   a2,
                   a3,
                   (unsigned __int64 *)&v4[3].Length,
                   &v4[3].Buffer);
        if ( inited >= 0 )
          goto LABEL_11;
        Buffer = v4->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0x6C506F50u);
        *v4 = 0LL;
      }
      ExFreePoolWithTag(v4, 0x6C506F50u);
      v4 = 0LL;
      goto LABEL_11;
    }
    inited = -1073741670;
  }
  else
  {
    inited = -1073741306;
  }
LABEL_11:
  result = (unsigned int)inited;
  *a4 = v4;
  return result;
}
