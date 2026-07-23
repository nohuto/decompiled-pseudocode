/*
 * XREFs of MiCaptureSectionCreateExtendedParameters @ 0x14098BA5C
 * Callers:
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     MiCreateSectionCommon @ 0x14098AD7C (MiCreateSectionCommon.c)
 *     MmCreateSectionEx @ 0x14098B2D0 (MmCreateSectionEx.c)
 *     AlpcpCreateSection @ 0x14098C8B8 (AlpcpCreateSection.c)
 * Callees:
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall MiCaptureSectionCreateExtendedParameters(
        _QWORD *Address,
        ULONGLONG ullMultiplicand,
        __int64 a3,
        char a4,
        __int64 a5)
{
  _QWORD *v6; // rbx
  NTSTATUS v7; // ecx
  __int64 v9; // r13
  int v10; // r12d
  _QWORD *v11; // r13
  unsigned __int64 ULong64FromUser; // rax
  int v13; // edi
  int v14; // r14d
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  ULONGLONG pullResult[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = Address;
  pullResult[0] = 0LL;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  if ( (_DWORD)ullMultiplicand )
  {
    if ( Address )
    {
      v9 = (unsigned int)ullMultiplicand;
      v7 = RtlULongLongMult((unsigned int)ullMultiplicand, 0x10uLL, pullResult);
      if ( v7 >= 0 )
      {
        v10 = 0;
        if ( a4 )
          ProbeForWrite(v6, pullResult[0], 8u);
        v11 = &v6[2 * v9];
        while ( 1 )
        {
          pullResult[2] = (ULONGLONG)v6;
          if ( v6 >= v11 )
            break;
          if ( a4 )
            ULong64FromUser = RtlReadULong64FromUser(v6);
          else
            ULong64FromUser = *v6;
          pullResult[0] = ULong64FromUser;
          v13 = (unsigned __int8)ULong64FromUser;
          if ( !(_BYTE)ULong64FromUser || (unsigned __int8)ULong64FromUser >= 5u || ULong64FromUser >= 0x100 )
            return (unsigned int)-1073741811;
          v14 = 1 << ULong64FromUser;
          if ( ((1 << ULong64FromUser) & 0x1E) == 0 )
            return (unsigned int)-1073741811;
          if ( (v14 & v10) != 0 )
            return (unsigned int)-1073741811;
          v15 = v6 + 1;
          if ( a4 )
            v16 = RtlReadULong64FromUser(v15);
          else
            v16 = *v15;
          pullResult[1] = v16;
          v10 |= v14;
          v17 = v13 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                if ( v19 != 1 )
                  return (unsigned int)-1073741811;
                *(_QWORD *)(a5 + 24) = v16;
                if ( (v16 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                  return (unsigned int)-1073741811;
                if ( (v16 & 1) != 0 && a4 )
                  return (unsigned int)-1073741637;
              }
              else
              {
                if ( a4 )
                  return (unsigned int)-1073741811;
                *(_BYTE *)(a5 + 8) = v16;
              }
            }
            else
            {
              if ( v16 > 0xFFFFFFFF )
                return (unsigned int)-1073741811;
              *(_DWORD *)(a5 + 4) = v16;
              if ( (_DWORD)v16 == -1 )
                return (unsigned int)-1073741811;
              *(_DWORD *)(a5 + 4) = v16 + 1;
            }
          }
          else
          {
            if ( v16 )
              return (unsigned int)-1073741811;
            *(_BYTE *)a5 = 1;
          }
          v6 += 2;
        }
        *(_DWORD *)(a5 + 12) = v10;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return Address != 0LL ? 0xC000000D : 0;
  }
  return (unsigned int)v7;
}
