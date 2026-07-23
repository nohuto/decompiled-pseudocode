/*
 * XREFs of SeSetAuditParameter @ 0x14046E5E0
 * Callers:
 *     CmpReportAuditVirtualizationEvent @ 0x140861774 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeSetAuditParameter(
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        SE_ADT_PARAMETER_TYPE Type,
        ULONG Index,
        PVOID Data)
{
  int v4; // r11d
  char *v5; // rax
  NTSTATUS result; // eax
  char *v7; // rax
  int v8; // r11d
  char *v9; // rax
  char *v10; // rax
  int v11; // r11d
  char *v12; // rax
  char *v13; // rax
  int v14; // r11d
  char *v15; // rax

  v4 = 0;
  if ( !AuditParameters )
    return -1073741811;
  switch ( Type )
  {
    case SeAdtParmTypeLogonIdNoSid:
LABEL_3:
      v5 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v5 + 4) = *(_QWORD *)Data;
LABEL_4:
      v4 = 8;
LABEL_5:
      *((_DWORD *)v5 + 6) = Type;
      *((_DWORD *)v5 + 7) = v4;
      return 0;
    case SeAdtParmTypeMessage:
LABEL_7:
      v7 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v7 + 4) = *(unsigned int *)Data;
      *((_DWORD *)v7 + 6) = Type;
      *((_DWORD *)v7 + 7) = 4;
      return 0;
    case SeAdtParmTypeMultiSzString:
LABEL_9:
      v8 = *(unsigned __int16 *)Data + 16;
      v9 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v9 + 6) = Data;
      *((_DWORD *)v9 + 6) = Type;
      *((_DWORD *)v9 + 7) = v8;
      return 0;
    default:
      switch ( Type )
      {
        case SeAdtParmTypeNone:
        case SeAdtParmTypeNoLogonId:
          v10 = (char *)AuditParameters + 32 * Index;
          *((_DWORD *)v10 + 7) = 0;
          *((_DWORD *)v10 + 7) = 0;
          *((_DWORD *)v10 + 6) = Type;
          result = 0;
          break;
        case SeAdtParmTypeString:
        case SeAdtParmTypeFileSpec:
          goto LABEL_9;
        case SeAdtParmTypeUlong:
        case SeAdtParmTypeHexUlong:
        case SeAdtParmTypeUlongNoConv:
          goto LABEL_7;
        case SeAdtParmTypeSid:
          v11 = 4 * *((unsigned __int8 *)Data + 1) + 8;
          v12 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v12 + 6) = Data;
          *((_DWORD *)v12 + 6) = Type;
          *((_DWORD *)v12 + 7) = v11;
          result = 0;
          break;
        case SeAdtParmTypeLogonId:
        case SeAdtParmTypeTime:
        case SeAdtParmTypeLuid:
        case SeAdtParmTypeHexInt64:
        case SeAdtParmTypeDuration:
        case SeAdtParmTypeDateTime:
        case SeAdtParmTypeLogonIdEx:
          goto LABEL_3;
        case SeAdtParmTypeAccessMask:
        case SeAdtParmTypeObjectTypes:
        case SeAdtParmTypeStringList:
        case SeAdtParmTypeSidList:
        case SeAdtParmTypeUserAccountControl:
        case SeAdtParmTypeNoUac:
          result = -1073741822;
          break;
        case SeAdtParmTypePrivs:
          if ( Data )
          {
            if ( *(_DWORD *)Data )
              v4 = 12 * *(_DWORD *)Data + 8;
            else
              v4 = 8;
          }
          v5 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v5 + 6) = Data;
          goto LABEL_5;
        case SeAdtParmTypePtr:
          v5 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v5 + 4) = Data;
          goto LABEL_4;
        case SeAdtParmTypeGuid:
          v13 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v13 + 6) = Data;
          *((_DWORD *)v13 + 6) = Type;
          *((_DWORD *)v13 + 7) = 16;
          result = 0;
          break;
        case SeAdtParmTypeSockAddr:
        case SeAdtParmTypeSockAddrNoPort:
          if ( *(_WORD *)Data == 23 )
          {
            v14 = 28;
          }
          else
          {
            v14 = 16;
            if ( *(_WORD *)Data == 33 )
              v14 = 14;
          }
          v15 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v15 + 6) = Data;
          *((_DWORD *)v15 + 6) = Type;
          *((_DWORD *)v15 + 7) = v14;
          result = 0;
          break;
        default:
          result = -1073741811;
          break;
      }
      break;
  }
  return result;
}
